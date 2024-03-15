#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AABBComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AABBComponent"));
	}

	template <typename R = float> R& xMin() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& xMax() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& yMin() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& yMax() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = Vec2> R Clamp(Vec2 pos) {
		return ((R (*)(AABBComponent*, Vec2))(Il2CppBase() + 0x1D9247C))(this, pos);
	}
	template <typename R = bool> R IsInside(Vec2 pos, float offset) {
		return ((R (*)(AABBComponent*, Vec2, float))(Il2CppBase() + 0x1D92518))(this, pos, offset);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AABBComponent*, Il2CppObject*))(Il2CppBase() + 0x1D92564))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D92610))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D92704))(this, writer);
	}

};

