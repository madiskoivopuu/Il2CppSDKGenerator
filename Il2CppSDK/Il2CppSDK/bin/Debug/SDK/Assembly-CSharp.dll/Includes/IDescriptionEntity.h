#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDescriptionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDescriptionEntity"));
	}


	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(IDescriptionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(IDescriptionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(IDescriptionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(IDescriptionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(IDescriptionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

