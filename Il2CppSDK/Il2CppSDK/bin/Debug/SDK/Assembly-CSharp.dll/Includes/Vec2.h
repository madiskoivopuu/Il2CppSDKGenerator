#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vec2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vec2"));
	}

	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> static T get_One() {
		return ((T (*)(void *))(Il2CppBase() + 0x15C3D84))(0);
	}
	template <typename T = uintptr_t> static T get_Zero() {
		return ((T (*)(void *))(Il2CppBase() + 0x15C3D90))(0);
	}
	template <typename T = float> T get_magnitude() {
		return ((T (*)(Vec2*))(Il2CppBase() + 0x15C3D9C))(this);
	}
	template <typename T = uintptr_t> T get_normalized() {
		return ((T (*)(Vec2*))(Il2CppBase() + 0x15C3E30))(this);
	}
	template <typename T = float> T get_sqrMagnitude() {
		return ((T (*)(Vec2*))(Il2CppBase() + 0x15C3EA8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Vec2*, uintptr_t))(Il2CppBase() + 0x15C3EBC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Vec2*))(Il2CppBase() + 0x15C3F64))(this);
	}
	template <typename T = void> T Normalize() {
		return ((T (*)(Vec2*))(Il2CppBase() + 0x15C3E5C))(this);
	}
	template <typename T = void> T Scale(uintptr_t scale) {
		return ((T (*)(Vec2*, uintptr_t))(Il2CppBase() + 0x15C3FA8))(this, scale);
	}
	template <typename T = void> T Set(float newX, float newY) {
		return ((T (*)(Vec2*, float, float))(Il2CppBase() + 0x15C3FBC))(this, newX, newY);
	}
	template <typename T = uintptr_t> T Rotate(float angle) {
		return ((T (*)(Vec2*, float))(Il2CppBase() + 0x15C3FC4))(this, angle);
	}
	template <typename T = float> static T Distance(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15C40B0))(0, a, b);
	}
	template <typename T = float> static T Dot(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15C40E8))(0, lhs, rhs);
	}
	template <typename T = float> static T Cross(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15C40F8))(0, lhs, rhs);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15C4108))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_Division(uintptr_t a, float d) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15C3F9C))(0, a, d);
	}
	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15C4114))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15C4140))(0, lhs, rhs);
	}
	template <typename T = uintptr_t> static T op_Multiply(float d, uintptr_t a) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x15C416C))(0, d, a);
	}
	template <typename T = uintptr_t> static T op_Multiply_1(uintptr_t a, float d) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15C417C))(0, a, d);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15C40DC))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_UnaryNegation(uintptr_t a) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15C4188))(0, a);
	}
	template <typename T = uintptr_t> static T FromUnityVector(Il2CppVector3 source) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x15C4194))(0, source);
	}
	template <typename T = Il2CppVector3> static T ToUnityVector(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15C419C))(0, source);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Vec2*))(Il2CppBase() + 0x15C41A8))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Vec2*, uintptr_t))(Il2CppBase() + 0x15C424C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Vec2*, uintptr_t))(Il2CppBase() + 0x15C42E8))(this, writer);
	}

};

}
