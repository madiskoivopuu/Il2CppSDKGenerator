#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountFuseSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountFuseSettings"));
	}

	template <typename R = Il2CppArray<GradeSetting*>*> R& GradeSettings() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<TypeRandomGroup*>*> R& MountsRandomGroupByType() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = MountFuseSettings*> static R& Default() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppArray<GradeSetting*>*> R get_GradeSettings() {
		return ((R (*)(MountFuseSettings*))(Il2CppBase() + 0x1EAB1A8))(this);
	}
	template <typename R = void> R set_GradeSettings(Il2CppArray<GradeSetting*>* value) {
		return ((R (*)(MountFuseSettings*, Il2CppArray<GradeSetting*>*))(Il2CppBase() + 0x1EAB1B0))(this, value);
	}
	template <typename R = Il2CppArray<TypeRandomGroup*>*> R get_MountsRandomGroupByType() {
		return ((R (*)(MountFuseSettings*))(Il2CppBase() + 0x1EAB1B8))(this);
	}
	template <typename R = void> R set_MountsRandomGroupByType(Il2CppArray<TypeRandomGroup*>* value) {
		return ((R (*)(MountFuseSettings*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0x1EAB1C0))(this, value);
	}

};

