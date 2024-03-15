#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOdinsCupActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOdinsCupActionEntity"));
	}


	template <typename R = OdinsCupActionComponent*> R get_odinsCupAction() {
		return ((R (*)(IOdinsCupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOdinsCupAction() {
		return ((R (*)(IOdinsCupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(IOdinsCupActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(IOdinsCupActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveOdinsCupAction() {
		return ((R (*)(IOdinsCupActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

