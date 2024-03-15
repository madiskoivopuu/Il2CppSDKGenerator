#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMailContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMailContexts"));
	}


	template <typename R = MailContext*> R get_mail() {
		return ((R (*)(IMailContexts*))(Il2CppBase() + 0x0))(this);
	}

};

