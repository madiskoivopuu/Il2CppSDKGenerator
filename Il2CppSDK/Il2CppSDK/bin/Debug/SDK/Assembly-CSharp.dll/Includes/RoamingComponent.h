#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoamingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoamingComponent"));
	}

	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Time() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& MaxTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RoamingComponent*, Il2CppObject*))(Il2CppBase() + 0x11A26C8))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(RoamingComponent*, Il2CppObject*))(Il2CppBase() + 0x11A276C))(this, blueprintComponent);
	}
	template <typename R = float> R GetTime(IRandomManager* rnd) {
		return ((R (*)(RoamingComponent*, IRandomManager*))(Il2CppBase() + 0x11A2870))(this, rnd);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RoamingComponent*, uintptr_t))(Il2CppBase() + 0x11A295C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RoamingComponent*, uintptr_t))(Il2CppBase() + 0x11A2A24))(this, writer);
	}

};

