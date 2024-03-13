#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildUpgradeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildUpgradeView"));
	}

	template <typename T = uintptr_t> T& DestoyButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& UpgradeButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RepairButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& UpgradeNeededResources() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RepairNeededResources() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

