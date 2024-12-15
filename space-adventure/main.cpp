#include "game.h"

int main() {
    const int FPS{60};
    const int FRAME_DELAY{1000 / FPS};

    Uint32 frameStart;
    int frameTime;

    Game *game = new Game();
    game->init("Space Adventure", SDL_WINDOWPOS_CENTERED,
               SDL_WINDOWPOS_CENTERED, 800, 600);

    while (game->running()) {
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if (FRAME_DELAY > frameTime) {
            SDL_Delay(FRAME_DELAY - frameTime);
        }
    }

    game->clean();

    return 0;
}
