#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftExtensions"));
	}


	template <typename T = bool> static T NeedFuel(CraftComponent* component) {
		return ((T (*)(void *, CraftComponent*))(Il2CppBase() + 0x134310C))(0, component);
	}
	template <typename T = bool> static T IsValidFuel(CraftComponent* component, ICommonContexts* world, Il2CppString* name) {
		return ((T (*)(void *, CraftComponent*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1343284))(0, component, world, name);
	}
	template <typename T = float> static T GetFuelTime(CraftComponent* component, ICommonContexts* world, Il2CppString* name) {
		return ((T (*)(void *, CraftComponent*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1343480))(0, component, world, name);
	}

};

