#pragma once

/*

Load assets stored as individual image files

*/

#include <QtGui/QPainter>
#include <iostream>
#include <memory>

std::shared_ptr<QImage> load_resource_ptr(QString relpath, QImage::Format format = QImage::Format_ARGB32_Premultiplied);

extern QString global_resource_root;
extern void images_load();
extern std::vector<std::shared_ptr<QImage>> topdown_backgrounds;
extern std::vector<std::shared_ptr<QImage>> topdown_simple_backgrounds;
extern std::vector<std::shared_ptr<QImage>> platform_backgrounds;
extern std::vector<std::shared_ptr<QImage>> space_backgrounds;
extern std::vector<std::shared_ptr<QImage>> water_backgrounds;
extern std::vector<std::shared_ptr<QImage>> water_surface_backgrounds;
// customized backgrounds
extern std::vector<std::shared_ptr<QImage>> topdown_background1;
extern std::vector<std::shared_ptr<QImage>> topdown_background2;
extern std::vector<std::shared_ptr<QImage>> topdown_background3;
extern std::vector<std::shared_ptr<QImage>> topdown_background4;
extern std::vector<std::shared_ptr<QImage>> topdown_background5;

extern std::vector<std::shared_ptr<QImage>> platform_backgrounds_air1;
extern std::vector<std::shared_ptr<QImage>> platform_backgrounds_battle1;
extern std::vector<std::shared_ptr<QImage>> platform_backgrounds_cave1;
extern std::vector<std::shared_ptr<QImage>> platform_backgrounds_landscape1;
extern std::vector<std::shared_ptr<QImage>> platform_backgrounds_cyberpunk1;

extern std::vector<std::shared_ptr<QImage>> space_background1;
extern std::vector<std::shared_ptr<QImage>> space_background2;
extern std::vector<std::shared_ptr<QImage>> space_background3;
extern std::vector<std::shared_ptr<QImage>> space_background4;
extern std::vector<std::shared_ptr<QImage>> space_background5;
