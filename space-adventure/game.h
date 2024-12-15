#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"

class Game {
  public:
    void init(const char *title, int x, int y, int width, int height);
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running();

  private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;
};

#endif
