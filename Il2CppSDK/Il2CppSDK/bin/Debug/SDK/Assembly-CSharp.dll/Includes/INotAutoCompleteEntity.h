#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotAutoCompleteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotAutoCompleteEntity"));
	}


	template <typename R = bool> R get_isNotAutoComplete() {
		return ((R (*)(INotAutoCompleteEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isNotAutoComplete(bool value) {
		return ((R (*)(INotAutoCompleteEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

