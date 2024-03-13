#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISocketEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISocketEntity"));
	}


	template <typename T = SocketComponent*> T get_socket() {
		return ((T (*)(ISocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSocket() {
		return ((T (*)(ISocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((T (*)(ISocketEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newIgnoreRotation);
	}
	template <typename T = void> T ReplaceSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((T (*)(ISocketEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newIgnoreRotation);
	}
	template <typename T = void> T RemoveSocket() {
		return ((T (*)(ISocketEntity*))(Il2CppBase() + 0x0))(this);
	}

};

