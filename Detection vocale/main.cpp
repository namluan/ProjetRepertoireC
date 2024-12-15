#include <pocketsphinx.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    ps_decoder_t *ps;
    cmd_ln_t *config;
    FILE *fh;
    char const *hyp;

    // Initialiser PocketSphinx
    config = cmd_ln_init(NULL, ps_args(), TRUE,
                         "-hmm", "path/to/model/en-us/en-us",
                         "-lm", "path/to/model/en-us/en-us.lm.bin",
                         "-dict", "path/to/model/en-us/cmudict-en-us.dict",
                         NULL);

    if (config == NULL) {
        printf("Erreur d'initialisation.\n");
        return -1;
    }

    ps = ps_init(config);
    if (ps == NULL) {
        printf("Erreur d'initialisation de PocketSphinx.\n");
        return -1;
    }

    // Ouvrir un fichier audio
    fh = fopen("audio.wav", "rb");
    if (fh == NULL) {
        printf("Erreur d'ouverture du fichier audio.\n");
        return -1;
    }

    fseek(fh, 44, SEEK_SET); // Sauter l'en-tête WAV

    // Décoder l'audio
    if (ps_decode_raw(ps, fh, -1) < 0) {
        printf("Erreur lors du décodage.\n");
        return -1;
    }

    // Récupérer et afficher la transcription
    hyp = ps_get_hyp(ps, NULL);
    if (hyp != NULL) {
        printf("Transcription : %s\n", hyp);
    } else {
        printf("Aucune transcription trouvée.\n");
    }

    // Libérer les ressources
    fclose(fh);
    ps_free(ps);
    cmd_ln_free_r(config);

    return 0;
}
