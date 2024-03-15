#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaFishingStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaFishingStatisticRequest"));
	}

	 static MessageParser1ProtoModels::ArenaFishingStatisticRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaFishingStatisticRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::FishingStatisticDataProto*> R& data_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaFishingStatisticRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaFishingStatisticRequest*>* (*)(void *))(Il2CppBase() + 0x1E1E430))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E1E494))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E5B4))(this);
	}
	template <typename R = ProtoModels::ArenaFishingStatisticRequest*> R Clone() {
		return ((R (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E670))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E6CC))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaFishingStatisticRequest*, int64_t))(Il2CppBase() + 0x1E1E6D4))(this, value);
	}
	template <typename R = ProtoModels::FishingStatisticDataProto*> R get_Data() {
		return ((R (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E6DC))(this);
	}
	template <typename R = void> R set_Data(ProtoModels::FishingStatisticDataProto* value) {
		return ((R (*)(ArenaFishingStatisticRequest*, ProtoModels::FishingStatisticDataProto*))(Il2CppBase() + 0x1E1E6E4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaFishingStatisticRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1E6EC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaFishingStatisticRequest* other) {
		return ((R (*)(ArenaFishingStatisticRequest*, ProtoModels::ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E75C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E798))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E800))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaFishingStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1E1E864))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E8E8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaFishingStatisticRequest* other) {
		return ((R (*)(ArenaFishingStatisticRequest*, ProtoModels::ArenaFishingStatisticRequest*))(Il2CppBase() + 0x1E1E99C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaFishingStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1E1EA54))(this, input);
	}

};

}
