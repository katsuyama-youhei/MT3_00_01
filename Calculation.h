#pragma once
#include"Vector3.h"
#include<Novice.h>
#define _USE_MATH_DEFINES
#include <math.h>

//加算
Vector3 Add(const Vector3& v1, const Vector3& v2) {
	Vector3 result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return result;
};

//減算
Vector3 Subtract(const Vector3& v1, const Vector3& v2) {
	Vector3 result;
	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;
	return result;
};

//スカラー倍
Vector3 Multiply(float scalar, const Vector3& v) {
	Vector3 result;
	result.x = scalar * v.x;
	result.y = scalar * v.y;
	result.z = scalar * v.z;
	return result;
};

//内積
float Dot(const Vector3& v1, const Vector3& v2) {
	float result;
	result = (v1.x*v2.x)+(v1.y*v2.y)+(v1.z*v2.z);
	return result;
};

//長さ（ノルム）
float Length(const Vector3& v) {
	float resultLength;
	resultLength = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	return resultLength;
};

//正規化
Vector3 Normlize(const Vector3& v) {
	Vector3 resultNormlize;
	float length = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	resultNormlize.x = v.x / length;
	resultNormlize.y = v.y / length;
	resultNormlize.z = v.z / length;
	return resultNormlize;
};

static const int kColumnWidth = 60;

void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label) {
	Novice::ScreenPrintf(x, y, "%.02f", vector.x);
	Novice::ScreenPrintf(x + kColumnWidth, y, "%.02f", vector.y);
	Novice::ScreenPrintf(x + kColumnWidth * 2, y, "%.02f", vector.z);
	Novice::ScreenPrintf(x + kColumnWidth * 3, y, "%s", label);
}