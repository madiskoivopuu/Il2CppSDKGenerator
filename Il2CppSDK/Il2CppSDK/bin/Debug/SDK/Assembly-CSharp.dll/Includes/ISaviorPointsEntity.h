#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISaviorPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISaviorPointsEntity"));
	}


	template <typename T = uintptr_t> T get_saviorPoints() {
		return ((T (*)(ISaviorPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(ISaviorPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(ISaviorPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(ISaviorPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(ISaviorPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
