#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IReplicatedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IReplicatedEntity"));
	}


	template <typename T = bool> T get_isReplicated() {
		return ((T (*)(IReplicatedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isReplicated(bool value) {
		return ((T (*)(IReplicatedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

