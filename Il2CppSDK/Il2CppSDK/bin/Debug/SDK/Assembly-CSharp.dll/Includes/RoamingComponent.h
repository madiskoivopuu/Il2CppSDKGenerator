#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoamingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoamingComponent"));
	}

	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(RoamingComponent*, Il2CppObject*))(Il2CppBase() + 0x11A26C8))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(RoamingComponent*, Il2CppObject*))(Il2CppBase() + 0x11A276C))(this, blueprintComponent);
	}
	template <typename T = float> T GetTime(IRandomManager* rnd) {
		return ((T (*)(RoamingComponent*, IRandomManager*))(Il2CppBase() + 0x11A2870))(this, rnd);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RoamingComponent*, uintptr_t))(Il2CppBase() + 0x11A295C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RoamingComponent*, uintptr_t))(Il2CppBase() + 0x11A2A24))(this, writer);
	}

};

