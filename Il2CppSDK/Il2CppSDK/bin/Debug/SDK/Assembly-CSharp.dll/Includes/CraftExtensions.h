#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftExtensions"));
	}


	template <typename R = bool> static R NeedFuel(CraftComponent* component) {
		return ((R (*)(void *, CraftComponent*))(Il2CppBase() + 0x134310C))(0, component);
	}
	template <typename R = bool> static R IsValidFuel(CraftComponent* component, ICommonContexts* world, Il2CppString* name) {
		return ((R (*)(void *, CraftComponent*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1343284))(0, component, world, name);
	}
	template <typename R = float> static R GetFuelTime(CraftComponent* component, ICommonContexts* world, Il2CppString* name) {
		return ((R (*)(void *, CraftComponent*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1343480))(0, component, world, name);
	}

};

