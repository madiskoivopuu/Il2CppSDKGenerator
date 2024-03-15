#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifiersCleanSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifiersCleanSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1ModifierEntity*>*& _targets() {
		return *(IGroup1ModifierEntity*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> static R& UPDATE_PERIOD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ModifiersCleanSystem*))(Il2CppBase() + 0x1EA588C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ModifiersCleanSystem*))(Il2CppBase() + 0x1EA5978))(this);
	}

};

