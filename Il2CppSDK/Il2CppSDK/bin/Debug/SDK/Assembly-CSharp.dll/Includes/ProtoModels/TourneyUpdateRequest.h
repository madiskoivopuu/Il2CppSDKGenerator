#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TourneyUpdateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TourneyUpdateRequest"));
	}

	 static MessageParser1ProtoModels::TourneyUpdateRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::TourneyUpdateRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TotalPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& totalPoints_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::TourneyUpdateRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::TourneyUpdateRequest*>* (*)(void *))(Il2CppBase() + 0x150D86C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x150D8D0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150D9F0))(this);
	}
	template <typename R = ProtoModels::TourneyUpdateRequest*> R Clone() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DA98))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DAF4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(TourneyUpdateRequest*, int64_t))(Il2CppBase() + 0x150DAFC))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DB04))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(TourneyUpdateRequest*, int64_t))(Il2CppBase() + 0x150DB0C))(this, value);
	}
	template <typename R = int32_t> R get_TotalPoints() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DB14))(this);
	}
	template <typename R = void> R set_TotalPoints(int32_t value) {
		return ((R (*)(TourneyUpdateRequest*, int32_t))(Il2CppBase() + 0x150DB1C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(TourneyUpdateRequest*, Il2CppObject*))(Il2CppBase() + 0x150DB24))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::TourneyUpdateRequest* other) {
		return ((R (*)(TourneyUpdateRequest*, ProtoModels::TourneyUpdateRequest*))(Il2CppBase() + 0x150DBD0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DC20))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DCAC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(TourneyUpdateRequest*, uintptr_t))(Il2CppBase() + 0x150DD10))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DDC0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::TourneyUpdateRequest* other) {
		return ((R (*)(TourneyUpdateRequest*, ProtoModels::TourneyUpdateRequest*))(Il2CppBase() + 0x150DEB8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(TourneyUpdateRequest*, uintptr_t))(Il2CppBase() + 0x150DEE4))(this, input);
	}

};

}
