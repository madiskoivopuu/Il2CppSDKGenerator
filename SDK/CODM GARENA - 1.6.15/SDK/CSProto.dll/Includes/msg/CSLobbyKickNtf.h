#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyKickNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyKickNtf"));
	}

	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_reason() {
		return ((T (*)(CSLobbyKickNtf*))(Il2CppBase() + 0x513AE14))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(CSLobbyKickNtf*, int32_t))(Il2CppBase() + 0x513AE1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyKickNtf*, bool))(Il2CppBase() + 0x513AE24))(this, createIfMissing);
	}

};

}