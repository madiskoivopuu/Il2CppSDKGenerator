#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountTraderComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountTraderComponent"));
	}

	template <typename R = Il2CppArray<GradeSetting*>*> R& GradeSettings() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<TypeRandomGroup*>*> R& MountsRandomGroupByType() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppArray<GradeSetting*>*> R get_GradeSettings() {
		return ((R (*)(MountTraderComponent*))(Il2CppBase() + 0x154981C))(this);
	}
	template <typename R = void> R set_GradeSettings(Il2CppArray<GradeSetting*>* value) {
		return ((R (*)(MountTraderComponent*, Il2CppArray<GradeSetting*>*))(Il2CppBase() + 0x1549824))(this, value);
	}
	template <typename R = Il2CppArray<TypeRandomGroup*>*> R get_MountsRandomGroupByType() {
		return ((R (*)(MountTraderComponent*))(Il2CppBase() + 0x154982C))(this);
	}
	template <typename R = void> R set_MountsRandomGroupByType(Il2CppArray<TypeRandomGroup*>* value) {
		return ((R (*)(MountTraderComponent*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0x1549834))(this, value);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MountTraderComponent*, Il2CppObject*))(Il2CppBase() + 0x154983C))(this, targetObject);
	}

};

