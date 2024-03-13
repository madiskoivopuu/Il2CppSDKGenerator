#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountFuseSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountFuseSettings"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& GradeSettings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MountsRandomGroupByType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = MountFuseSettings*> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_GradeSettings() {
		return ((T (*)(MountFuseSettings*))(Il2CppBase() + 0x1EAB1A8))(this);
	}
	template <typename T = void> T set_GradeSettings(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MountFuseSettings*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EAB1B0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MountsRandomGroupByType() {
		return ((T (*)(MountFuseSettings*))(Il2CppBase() + 0x1EAB1B8))(this);
	}
	template <typename T = void> T set_MountsRandomGroupByType(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MountFuseSettings*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EAB1C0))(this, value);
	}

};

