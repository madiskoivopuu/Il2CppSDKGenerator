#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vec2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vec2"));
	}

	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = Vec2> static R get_One() {
		return ((R (*)(void *))(Il2CppBase() + 0x15C3D84))(0);
	}
	template <typename R = Vec2> static R get_Zero() {
		return ((R (*)(void *))(Il2CppBase() + 0x15C3D90))(0);
	}
	template <typename R = float> R get_magnitude() {
		return ((R (*)(Vec2*))(Il2CppBase() + 0x15C3D9C))(this);
	}
	template <typename R = Vec2> R get_normalized() {
		return ((R (*)(Vec2*))(Il2CppBase() + 0x15C3E30))(this);
	}
	template <typename R = float> R get_sqrMagnitude() {
		return ((R (*)(Vec2*))(Il2CppBase() + 0x15C3EA8))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Vec2*, Il2CppObject*))(Il2CppBase() + 0x15C3EBC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Vec2*))(Il2CppBase() + 0x15C3F64))(this);
	}
	template <typename R = void> R Normalize() {
		return ((R (*)(Vec2*))(Il2CppBase() + 0x15C3E5C))(this);
	}
	template <typename R = void> R Scale(Vec2 scale) {
		return ((R (*)(Vec2*, Vec2))(Il2CppBase() + 0x15C3FA8))(this, scale);
	}
	template <typename R = void> R Set(float newX, float newY) {
		return ((R (*)(Vec2*, float, float))(Il2CppBase() + 0x15C3FBC))(this, newX, newY);
	}
	template <typename R = Vec2> R Rotate(float angle) {
		return ((R (*)(Vec2*, float))(Il2CppBase() + 0x15C3FC4))(this, angle);
	}
	template <typename R = float> static R Distance(Vec2 a, Vec2 b) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x15C40B0))(0, a, b);
	}
	template <typename R = float> static R Dot(Vec2 lhs, Vec2 rhs) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x15C40E8))(0, lhs, rhs);
	}
	template <typename R = float> static R Cross(Vec2 lhs, Vec2 rhs) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x15C40F8))(0, lhs, rhs);
	}
	template <typename R = Vec2> static R op_Addition(Vec2 a, Vec2 b) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x15C4108))(0, a, b);
	}
	template <typename R = Vec2> static R op_Division(Vec2 a, float d) {
		return ((R (*)(void *, Vec2, float))(Il2CppBase() + 0x15C3F9C))(0, a, d);
	}
	template <typename R = bool> static R op_Equality(Vec2 lhs, Vec2 rhs) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x15C4114))(0, lhs, rhs);
	}
	template <typename R = bool> static R op_Inequality(Vec2 lhs, Vec2 rhs) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x15C4140))(0, lhs, rhs);
	}
	template <typename R = Vec2> static R op_Multiply(float d, Vec2 a) {
		return ((R (*)(void *, float, Vec2))(Il2CppBase() + 0x15C416C))(0, d, a);
	}
	template <typename R = Vec2> static R op_Multiply_1(Vec2 a, float d) {
		return ((R (*)(void *, Vec2, float))(Il2CppBase() + 0x15C417C))(0, a, d);
	}
	template <typename R = Vec2> static R op_Subtraction(Vec2 a, Vec2 b) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x15C40DC))(0, a, b);
	}
	template <typename R = Vec2> static R op_UnaryNegation(Vec2 a) {
		return ((R (*)(void *, Vec2))(Il2CppBase() + 0x15C4188))(0, a);
	}
	template <typename R = Vec2> static R FromUnityVector(uintptr_t source) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x15C4194))(0, source);
	}
	template <typename R = uintptr_t> static R ToUnityVector(Vec2 source) {
		return ((R (*)(void *, Vec2))(Il2CppBase() + 0x15C419C))(0, source);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Vec2*))(Il2CppBase() + 0x15C41A8))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Vec2*, uintptr_t))(Il2CppBase() + 0x15C424C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Vec2*, uintptr_t))(Il2CppBase() + 0x15C42E8))(this, writer);
	}

};

