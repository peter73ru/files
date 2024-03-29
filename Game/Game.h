#include "../SDL/include/SDL.h"
#include "../SDL/include/SDL_image.h"
#include <iostream>
#include <map>
#include <math.h>
#include <string>

class Game
{
public:
  bool m_bRun = false;

  bool init();
  bool loadTexture(std::string fileName, std::string id);
  void events();
  void update();
  void render();
  void clean();

private:
  SDL_Window* m_pWindow;
  SDL_Renderer* m_pRenderer;

  int m_TileWidth = 64;
  int m_TileHeight = 64;

  enum Move {
    NONE, UP, DOWN, LEFT, RIGHT
  };
  struct Object {
    int x = 0; int y = 100; Move move = NONE;
    int direction = 3; int frame = 1;
  };
  Object m_Ash;
  Object m_Pokemon1;
  Object m_Pokemon2;

  struct Vector {
    int length;
  };
  Vector m_vP1;
  Vector m_vP2;

  std::map<std::string, bool> m_Presses;
  bool unpressed();

  std::map<std::string, SDL_Texture*> m_TextureMap;
  //void drawObject(std::string id, int item, int row, int width, int height, int x, int y);
  void drawObject(std::string id, int item, int row, int width, int height, int x, int y);
};
