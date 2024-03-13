#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AABBComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AABBComponent"));
	}

	template <typename T = float> T& xMin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& xMax() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& yMin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& yMax() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Vec2*> T Clamp(Vec2* pos) {
		return ((T (*)(AABBComponent*, Vec2*))(Il2CppBase() + 0x1D9247C))(this, pos);
	}
	template <typename T = bool> T IsInside(Vec2* pos, float offset) {
		return ((T (*)(AABBComponent*, Vec2*, float))(Il2CppBase() + 0x1D92518))(this, pos, offset);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(AABBComponent*, Il2CppObject*))(Il2CppBase() + 0x1D92564))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D92610))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D92704))(this, writer);
	}

};

