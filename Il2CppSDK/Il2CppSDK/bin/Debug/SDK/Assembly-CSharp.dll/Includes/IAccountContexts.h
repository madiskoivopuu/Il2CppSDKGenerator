#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAccountContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAccountContexts"));
	}


	template <typename T = AccountContext*> T get_accounts() {
		return ((T (*)(IAccountContexts*))(Il2CppBase() + 0x0))(this);
	}

};

