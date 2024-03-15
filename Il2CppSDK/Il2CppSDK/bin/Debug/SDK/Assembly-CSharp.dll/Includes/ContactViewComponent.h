#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactViewComponent"));
	}

	template <typename R = ChatContactView*> R& View() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

