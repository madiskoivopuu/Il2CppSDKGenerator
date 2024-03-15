#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountTraderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountTraderEntity"));
	}


	template <typename R = MountTraderComponent*> R get_mountTrader() {
		return ((R (*)(IMountTraderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMountTrader() {
		return ((R (*)(IMountTraderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMountTrader(Il2CppArray<GradeSetting*>* newGradeSettings, Il2CppArray<TypeRandomGroup*>* newMountsRandomGroupByType) {
		return ((R (*)(IMountTraderEntity*, Il2CppArray<GradeSetting*>*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0x0))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename R = void> R ReplaceMountTrader(Il2CppArray<GradeSetting*>* newGradeSettings, Il2CppArray<TypeRandomGroup*>* newMountsRandomGroupByType) {
		return ((R (*)(IMountTraderEntity*, Il2CppArray<GradeSetting*>*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0x0))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename R = void> R RemoveMountTrader() {
		return ((R (*)(IMountTraderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

