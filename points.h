#ifndef __POINTS_H
#define __POINTS_H

#define MAX_POINTS 100

struct point {
  float x;
  float y;
};

void input_point(struct point *pt);
void display_point(struct point pt);
bool compare_point(struct point a, struct point b);
bool check_input_valid(struct point pts[], struct point pt, int n);
float scale_factor(struct point a, struct point b);
void swap(float *xp, float *yp);
void bubble_sort(float list[], int n);
float distance_points(struct point a, struct point b);
float caculate_area_triangle(struct point a, struct point b, struct point c);
int count_lines_from_points(struct point points[], int number_points);
int count_triangle_from_points(struct point points[], int number_points);
int orientation(struct point a, struct point b, struct point c);
int find_left(struct point points[], int number_points);
int find_polygon(struct point points[], int number_points, struct point points_polygon[]);
float polygon_area(struct point pts[], int n);

#endif
