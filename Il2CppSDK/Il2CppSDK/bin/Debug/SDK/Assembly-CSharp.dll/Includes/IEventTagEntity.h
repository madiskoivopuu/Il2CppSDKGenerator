#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventTagEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventTagEntity"));
	}


	template <typename T = EventTagComponent*> T get_eventTag() {
		return ((T (*)(IEventTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEventTag() {
		return ((T (*)(IEventTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEventTag(Il2CppString* newValue) {
		return ((T (*)(IEventTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceEventTag(Il2CppString* newValue) {
		return ((T (*)(IEventTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveEventTag() {
		return ((T (*)(IEventTagEntity*))(Il2CppBase() + 0x0))(this);
	}

};

