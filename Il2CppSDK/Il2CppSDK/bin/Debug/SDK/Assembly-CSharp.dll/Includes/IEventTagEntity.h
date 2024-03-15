#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventTagEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventTagEntity"));
	}


	template <typename R = EventTagComponent*> R get_eventTag() {
		return ((R (*)(IEventTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEventTag() {
		return ((R (*)(IEventTagEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEventTag(Il2CppString* newValue) {
		return ((R (*)(IEventTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceEventTag(Il2CppString* newValue) {
		return ((R (*)(IEventTagEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveEventTag() {
		return ((R (*)(IEventTagEntity*))(Il2CppBase() + 0x0))(this);
	}

};

