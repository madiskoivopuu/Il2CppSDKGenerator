#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace devtodevWSA {

class PushActionHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "devtodevWSA", "PushActionHandler"));
	}


	template <typename T = void> static T HandlePushAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BA378))(0);
	}

};

}
