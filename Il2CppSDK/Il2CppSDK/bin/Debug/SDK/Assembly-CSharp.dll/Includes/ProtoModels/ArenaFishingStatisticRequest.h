#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaFishingStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaFishingStatisticRequest"));
	}

	template <typename T = MessageParser1ArenaFishingStatisticRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FishingStatisticDataProto*> T& data_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaFishingStatisticRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1E430))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1E494))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E5B4))(this);
	}
	template <typename T = ArenaFishingStatisticRequest*> T Clone() {
		return ((T (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E670))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E6CC))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaFishingStatisticRequest*, int64_t))(Il2CppBase() + 0x1E1E6D4))(this, value);
	}
	template <typename T = FishingStatisticDataProto*> T get_Data() {
		return ((T (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E6DC))(this);
	}
	template <typename T = void> T set_Data(FishingStatisticDataProto* value) {
		return ((T (*)(ArenaFishingStatisticRequest*, FishingStatisticDataProto*))(Il2CppBase() + 0x1E1E6E4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaFishingStatisticRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1E6EC))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaFishingStatisticRequest* other) {
		return ((T (*)(ArenaFishingStatisticRequest*, ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E75C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E798))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E800))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaFishingStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1E1E864))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E8E8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaFishingStatisticRequest* other) {
		return ((T (*)(ArenaFishingStatisticRequest*, ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E99C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaFishingStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1E1EA54))(this, input);
	}

};

}
