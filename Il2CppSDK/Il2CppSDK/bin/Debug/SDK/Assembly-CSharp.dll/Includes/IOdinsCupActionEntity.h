#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOdinsCupActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOdinsCupActionEntity"));
	}


	template <typename T = OdinsCupActionComponent*> T get_odinsCupAction() {
		return ((T (*)(IOdinsCupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOdinsCupAction() {
		return ((T (*)(IOdinsCupActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(IOdinsCupActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(IOdinsCupActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveOdinsCupAction() {
		return ((T (*)(IOdinsCupActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

