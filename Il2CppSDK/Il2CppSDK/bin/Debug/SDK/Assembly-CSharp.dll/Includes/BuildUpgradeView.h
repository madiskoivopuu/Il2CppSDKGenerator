#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildUpgradeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildUpgradeView"));
	}

	template <typename R = uintptr_t> R& DestoyButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& UpgradeButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& RepairButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<TextImageMonoBehaviour*>*> R& UpgradeNeededResources() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<TextImageMonoBehaviour*>*> R& RepairNeededResources() {
		return *(R*)((uintptr_t)this + 0x38);
	}


};

