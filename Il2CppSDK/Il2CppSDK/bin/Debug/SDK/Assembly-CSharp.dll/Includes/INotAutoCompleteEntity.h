#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotAutoCompleteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotAutoCompleteEntity"));
	}


	template <typename T = bool> T get_isNotAutoComplete() {
		return ((T (*)(INotAutoCompleteEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isNotAutoComplete(bool value) {
		return ((T (*)(INotAutoCompleteEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
