#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FishingStatisticDataProto
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FishingStatisticDataProto"));
	}

	 static MessageParser1ProtoModels::FishingStatisticDataProto*>*& _parser() {
		return *(MessageParser1ProtoModels::FishingStatisticDataProto*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& EventTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& eventTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ToolNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& toolName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& OscillationNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& oscillationName_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& UseFishnetNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& useFishnetName_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& SuccessFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& success_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& InterruptFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& interrupt_() {
		return *(R*)((uintptr_t)this + 0x49);
	}
	template <typename R = int32_t> static R& LureNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& lureName_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& NodeNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& nodeName_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& DurationMsecFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& durationMsec_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& ResultFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& result_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& LifeTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& lifeTime_() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = int32_t> static R& PveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveID_() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	 static MessageParser1ProtoModels::FishingStatisticDataProto*>* get_Parser() {
		return ((MessageParser1ProtoModels::FishingStatisticDataProto*>* (*)(void *))(Il2CppBase() + 0x15F53F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15F545C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F557C))(this);
	}
	template <typename R = ProtoModels::FishingStatisticDataProto*> R Clone() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F575C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57B8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57C0))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57C8))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57D0))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57D8))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57E0))(this, value);
	}
	template <typename R = int64_t> R get_EventTimeUnix() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57E8))(this);
	}
	template <typename R = void> R set_EventTimeUnix(int64_t value) {
		return ((R (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57F0))(this, value);
	}
	template <typename R = Il2CppString*> R get_ToolName() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57F8))(this);
	}
	template <typename R = void> R set_ToolName(Il2CppString* value) {
		return ((R (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5800))(this, value);
	}
	template <typename R = Il2CppString*> R get_OscillationName() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5880))(this);
	}
	template <typename R = void> R set_OscillationName(Il2CppString* value) {
		return ((R (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5888))(this, value);
	}
	template <typename R = Il2CppString*> R get_UseFishnetName() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5908))(this);
	}
	template <typename R = void> R set_UseFishnetName(Il2CppString* value) {
		return ((R (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5910))(this, value);
	}
	template <typename R = bool> R get_Success() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5990))(this);
	}
	template <typename R = void> R set_Success(bool value) {
		return ((R (*)(FishingStatisticDataProto*, bool))(Il2CppBase() + 0x15F5998))(this, value);
	}
	template <typename R = bool> R get_Interrupt() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F59A4))(this);
	}
	template <typename R = void> R set_Interrupt(bool value) {
		return ((R (*)(FishingStatisticDataProto*, bool))(Il2CppBase() + 0x15F59AC))(this, value);
	}
	template <typename R = Il2CppString*> R get_LureName() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F59B8))(this);
	}
	template <typename R = void> R set_LureName(Il2CppString* value) {
		return ((R (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F59C0))(this, value);
	}
	template <typename R = Il2CppString*> R get_NodeName() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5A40))(this);
	}
	template <typename R = void> R set_NodeName(Il2CppString* value) {
		return ((R (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5A48))(this, value);
	}
	template <typename R = int32_t> R get_DurationMsec() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5AC8))(this);
	}
	template <typename R = void> R set_DurationMsec(int32_t value) {
		return ((R (*)(FishingStatisticDataProto*, int32_t))(Il2CppBase() + 0x15F5AD0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Result() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5AD8))(this);
	}
	template <typename R = void> R set_Result(Il2CppString* value) {
		return ((R (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5AE0))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5B60))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(FishingStatisticDataProto*, int32_t))(Il2CppBase() + 0x15F5B68))(this, value);
	}
	template <typename R = int32_t> R get_LifeTime() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5B70))(this);
	}
	template <typename R = void> R set_LifeTime(int32_t value) {
		return ((R (*)(FishingStatisticDataProto*, int32_t))(Il2CppBase() + 0x15F5B78))(this, value);
	}
	template <typename R = int64_t> R get_PveID() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5B80))(this);
	}
	template <typename R = void> R set_PveID(int64_t value) {
		return ((R (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F5B88))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(FishingStatisticDataProto*, Il2CppObject*))(Il2CppBase() + 0x15F5B90))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::FishingStatisticDataProto* other) {
		return ((R (*)(FishingStatisticDataProto*, ProtoModels::FishingStatisticDataProto*))(Il2CppBase() + 0x15F5C00))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5D74))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5F94))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(FishingStatisticDataProto*, uintptr_t))(Il2CppBase() + 0x15F5FF8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F6318))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::FishingStatisticDataProto* other) {
		return ((R (*)(FishingStatisticDataProto*, ProtoModels::FishingStatisticDataProto*))(Il2CppBase() + 0x15F6700))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(FishingStatisticDataProto*, uintptr_t))(Il2CppBase() + 0x15F6830))(this, input);
	}

};

}
