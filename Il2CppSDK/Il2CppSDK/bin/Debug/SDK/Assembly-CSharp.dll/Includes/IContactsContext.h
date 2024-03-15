#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IContactsContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IContactsContext"));
	}


	template <typename R = ContactsContext*> R get_contacts() {
		return ((R (*)(IContactsContext*))(Il2CppBase() + 0x0))(this);
	}

};

