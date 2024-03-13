#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatSettings"));
	}

	template <typename T = Il2CppString*> static T& MatrixLicence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

