#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountTraderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountTraderEntity"));
	}


	template <typename T = uintptr_t> T get_mountTrader() {
		return ((T (*)(IMountTraderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMountTrader() {
		return ((T (*)(IMountTraderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMountTrader(Il2CppArray<uintptr_t>* newGradeSettings, Il2CppArray<uintptr_t>* newMountsRandomGroupByType) {
		return ((T (*)(IMountTraderEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename T = void> T ReplaceMountTrader(Il2CppArray<uintptr_t>* newGradeSettings, Il2CppArray<uintptr_t>* newMountsRandomGroupByType) {
		return ((T (*)(IMountTraderEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename T = void> T RemoveMountTrader() {
		return ((T (*)(IMountTraderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
