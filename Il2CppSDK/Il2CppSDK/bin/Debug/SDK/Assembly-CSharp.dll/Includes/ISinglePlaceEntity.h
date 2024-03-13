#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISinglePlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISinglePlaceEntity"));
	}


	template <typename T = SinglePlaceComponent*> T get_singlePlace() {
		return ((T (*)(ISinglePlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSinglePlace() {
		return ((T (*)(ISinglePlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((T (*)(ISinglePlaceEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename T = void> T ReplaceSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((T (*)(ISinglePlaceEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename T = void> T RemoveSinglePlace() {
		return ((T (*)(ISinglePlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

