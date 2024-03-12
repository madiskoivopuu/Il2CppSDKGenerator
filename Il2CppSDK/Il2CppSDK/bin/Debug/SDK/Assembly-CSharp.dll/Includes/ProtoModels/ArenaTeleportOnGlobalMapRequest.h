#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaTeleportOnGlobalMapRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaTeleportOnGlobalMapRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_data_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& data_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x272136C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x27213D0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27214F0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721650))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27216AC))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*, int64_t))(Il2CppBase() + 0x27216B4))(this, value);
	}
	template <typename T = void*> T get_Data() {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27216BC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x27216C4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x2721734))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27217D0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721838))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x272189C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721968))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x2721A4C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaTeleportOnGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x2721AD0))(this, input);
	}

};

}
