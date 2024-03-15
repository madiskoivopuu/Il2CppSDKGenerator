#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgradeChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgradeChestWindowHelper"));
	}


	template <typename R = UpgradeChestWindow*> static R ShowUpgradeChest(UIWindowsManager* manager, int32_t targetId, Action1int32_t>* onUpgrade) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, Action1int32_t>*))(Il2CppBase() + 0x154267C))(0, manager, targetId, onUpgrade);
	}

};

