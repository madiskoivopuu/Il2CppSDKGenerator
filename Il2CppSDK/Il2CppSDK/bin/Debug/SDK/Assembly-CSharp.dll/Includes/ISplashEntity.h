#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISplashEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISplashEntity"));
	}


	template <typename R = SplashComponent*> R get_splash() {
		return ((R (*)(ISplashEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSplash() {
		return ((R (*)(ISplashEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSplash(Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item>* newList, TargetsSelector* newSelector) {
		return ((R (*)(ISplashEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppArray<Item>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceSplash(Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item>* newList, TargetsSelector* newSelector) {
		return ((R (*)(ISplashEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppArray<Item>*, TargetsSelector*))(Il2CppBase() + 0x0))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveSplash() {
		return ((R (*)(ISplashEntity*))(Il2CppBase() + 0x0))(this);
	}

};

