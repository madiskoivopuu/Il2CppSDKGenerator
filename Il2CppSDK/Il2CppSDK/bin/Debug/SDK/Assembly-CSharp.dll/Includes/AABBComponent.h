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

	template <typename T = uintptr_t> T Clamp(uintptr_t pos) {
		return ((T (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D9247C))(this, pos);
	}
	template <typename T = bool> T IsInside(uintptr_t pos, float offset) {
		return ((T (*)(AABBComponent*, uintptr_t, float))(Il2CppBase() + 0x1D92518))(this, pos, offset);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D92564))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D92610))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AABBComponent*, uintptr_t))(Il2CppBase() + 0x1D92704))(this, writer);
	}

};

}
