#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifiersCleanSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifiersCleanSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1ModifierEntity*>*> T& _targets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> static T& UPDATE_PERIOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ModifiersCleanSystem*))(Il2CppBase() + 0x1EA588C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ModifiersCleanSystem*))(Il2CppBase() + 0x1EA5978))(this);
	}

};

