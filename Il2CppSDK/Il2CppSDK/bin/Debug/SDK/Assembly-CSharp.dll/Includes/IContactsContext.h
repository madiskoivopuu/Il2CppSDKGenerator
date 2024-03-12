#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IContactsContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IContactsContext"));
	}


	template <typename T = uintptr_t> T get_contacts() {
		return ((T (*)(IContactsContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
