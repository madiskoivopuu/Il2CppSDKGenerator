#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDescriptionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDescriptionEntity"));
	}


	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(IDescriptionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(IDescriptionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(IDescriptionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(IDescriptionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(IDescriptionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

