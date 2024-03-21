#pragma once

#include "../mscorlib/System/Object.h"

namespace LiteNetLib { class NetPeer; }
namespace System_Net { class IPEndPoint; }

class PeerComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PeerComponent"));
	}

	LiteNetLib::NetPeer*& Value() {
		return *(LiteNetLib::NetPeer**)((uintptr_t)this + 0x10);
	}

	System_Net::IPEndPoint*& Ip() {
		return *(System_Net::IPEndPoint**)((uintptr_t)this + 0x18);
	}

};};
