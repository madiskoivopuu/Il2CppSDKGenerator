#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISplashEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISplashEntity"));
	}


	template <typename T = SplashComponent*> T get_splash() {
		return ((T (*)(ISplashEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSplash() {
		return ((T (*)(ISplashEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSplash(Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(ISplashEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceSplash(Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(ISplashEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveSplash() {
		return ((T (*)(ISplashEntity*))(Il2CppBase() + 0x0))(this);
	}

};

